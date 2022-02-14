
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dm_target {char* error; int num_flush_requests; int table; struct crypt_config* private; } ;
struct dm_crypt_request {int dummy; } ;
struct crypt_config {unsigned int key_size; int dmreq_start; unsigned long long iv_offset; unsigned long long start; void* crypt_queue; void* io_queue; int dev; int bs; int page_pool; int * req; int req_pool; scalar_t__ iv_size; int tfm; int io_pool; } ;
struct ablkcipher_request {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (struct dm_target*,char*,char*) ;
 int FUNC_4 (struct dm_target*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct dm_target*,char*,int ,int *) ;
 int FUNC_9 (int ) ;
 struct crypt_config* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (char*,char*,unsigned long long*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int FUNC_16(struct dm_target *VAR_6, unsigned int VAR_7, char **VAR_8)
{
 struct crypt_config *VAR_9;
 unsigned int VAR_10;
 unsigned long long VAR_11;
 int VAR_12;

 if (VAR_7 != 5) {
  VAR_6->error = "Not enough arguments";
  return -VAR_0;
 }

 VAR_10 = FUNC_15(VAR_8[1]) >> 1;

 VAR_9 = FUNC_10(sizeof(*VAR_9) + VAR_10 * sizeof(u8), VAR_2);
 if (!VAR_9) {
  VAR_6->error = "Cannot allocate encryption context";
  return -VAR_1;
 }
 VAR_9->key_size = VAR_10;

 VAR_6->private = VAR_9;
 VAR_12 = FUNC_3(VAR_6, VAR_8[0], VAR_8[1]);
 if (VAR_12 < 0)
  goto bad;

 VAR_12 = -VAR_1;
 VAR_9->io_pool = FUNC_13(VAR_3, VAR_5);
 if (!VAR_9->io_pool) {
  VAR_6->error = "Cannot allocate crypt io mempool";
  goto bad;
 }

 VAR_9->dmreq_start = sizeof(struct ablkcipher_request);
 VAR_9->dmreq_start += FUNC_6(VAR_9->tfm);
 VAR_9->dmreq_start = FUNC_0(VAR_9->dmreq_start, FUNC_7());
 VAR_9->dmreq_start += FUNC_5(VAR_9->tfm) &
      ~(FUNC_7() - 1);

 VAR_9->req_pool = FUNC_11(VAR_3, VAR_9->dmreq_start +
   sizeof(struct dm_crypt_request) + VAR_9->iv_size);
 if (!VAR_9->req_pool) {
  VAR_6->error = "Cannot allocate crypt request mempool";
  goto bad;
 }
 VAR_9->req = ((void*)0);

 VAR_9->page_pool = FUNC_12(VAR_4, 0);
 if (!VAR_9->page_pool) {
  VAR_6->error = "Cannot allocate page mempool";
  goto bad;
 }

 VAR_9->bs = FUNC_1(VAR_3, 0);
 if (!VAR_9->bs) {
  VAR_6->error = "Cannot allocate crypt bioset";
  goto bad;
 }

 VAR_12 = -VAR_0;
 if (FUNC_14(VAR_8[2], "%llu", &VAR_11) != 1) {
  VAR_6->error = "Invalid iv_offset sector";
  goto bad;
 }
 VAR_9->iv_offset = VAR_11;

 if (FUNC_8(VAR_6, VAR_8[3], FUNC_9(VAR_6->table), &VAR_9->dev)) {
  VAR_6->error = "Device lookup failed";
  goto bad;
 }

 if (FUNC_14(VAR_8[4], "%llu", &VAR_11) != 1) {
  VAR_6->error = "Invalid device sector";
  goto bad;
 }
 VAR_9->start = VAR_11;

 VAR_12 = -VAR_1;
 VAR_9->io_queue = FUNC_2("kcryptd_io");
 if (!VAR_9->io_queue) {
  VAR_6->error = "Couldn't create kcryptd io queue";
  goto bad;
 }

 VAR_9->crypt_queue = FUNC_2("kcryptd");
 if (!VAR_9->crypt_queue) {
  VAR_6->error = "Couldn't create kcryptd queue";
  goto bad;
 }

 VAR_6->num_flush_requests = 1;
 return 0;

bad:
 FUNC_4(VAR_6);
 return VAR_12;
}

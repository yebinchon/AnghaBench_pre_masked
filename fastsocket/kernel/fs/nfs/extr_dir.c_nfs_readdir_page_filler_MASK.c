
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct xdr_buf {unsigned int page_len; unsigned int buflen; unsigned int len; struct page** pages; } ;
struct page {int dummy; } ;
struct nfs_entry {scalar_t__ eof; } ;
struct nfs_cache_array {int size; int eof_index; } ;
struct TYPE_8__ {scalar_t__ plus; TYPE_2__* file; } ;
typedef TYPE_3__ nfs_readdir_descriptor_t ;
struct TYPE_6__ {int dentry; } ;
struct TYPE_7__ {TYPE_1__ f_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfs_cache_array*) ;
 int VAR_4 ;
 int FUNC_1 (struct nfs_cache_array*) ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct nfs_entry*) ;
 int FUNC_4 (struct nfs_entry*,struct page*) ;
 struct nfs_cache_array* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (TYPE_3__*,struct nfs_entry*,struct xdr_stream*) ;
 int FUNC_10 (struct xdr_stream*,struct xdr_buf*,int *) ;
 int FUNC_11 (struct xdr_stream*,int ,int ) ;

__attribute__((used)) static
int FUNC_12(nfs_readdir_descriptor_t *VAR_5, struct nfs_entry *VAR_6,
    struct page **VAR_7, struct page *VAR_8, unsigned int VAR_9)
{
 struct xdr_stream VAR_10;
 struct xdr_buf VAR_11 = {
  .pages = VAR_7,
  .page_len = VAR_9,
  .buflen = VAR_9,
  .len = VAR_9,
 };
 struct page *VAR_12;
 struct nfs_cache_array *VAR_13;
 unsigned int VAR_14 = 0;
 int VAR_15;

 VAR_12 = FUNC_2(VAR_3);
 if (VAR_12 == ((void*)0))
  return -VAR_2;

 FUNC_10(&VAR_10, &VAR_11, ((void*)0));
 FUNC_11(&VAR_10, FUNC_7(VAR_12), VAR_4);

 do {
  VAR_15 = FUNC_9(VAR_5, VAR_6, &VAR_10);
  if (VAR_15 != 0) {
   if (VAR_15 == -VAR_0)
    VAR_15 = 0;
   break;
  }

  VAR_14++;

  if (VAR_5->plus != 0)
   FUNC_3(VAR_5->file->f_path.dentry, VAR_6);

  VAR_15 = FUNC_4(VAR_6, VAR_8);
  if (VAR_15 != 0)
   break;
 } while (!VAR_6->eof);

 if (VAR_14 == 0 || (VAR_15 == -VAR_1 && VAR_6->eof != 0)) {
  VAR_13 = FUNC_5(VAR_8);
  if (!FUNC_0(VAR_13)) {
   VAR_13->eof_index = VAR_13->size;
   VAR_15 = 0;
   FUNC_6(VAR_8);
  } else
   VAR_15 = FUNC_1(VAR_13);
 }

 FUNC_8(VAR_12);
 return VAR_15;
}

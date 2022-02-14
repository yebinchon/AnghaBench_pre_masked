
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_9__ {size_t misc; scalar_t__ length; int recvb; int sendb; } ;
struct pending_request {TYPE_1__ req; } ;
struct file_info {struct csr1212_keyval** csr1212_dirs; TYPE_8__* host; } ;
struct TYPE_10__ {struct csr1212_dentry* dentries_head; } ;
struct TYPE_11__ {TYPE_2__ directory; } ;
struct csr1212_keyval {TYPE_3__ value; struct csr1212_keyval* next; } ;
struct csr1212_dentry {int kv; struct csr1212_dentry* next; } ;
struct csr1212_csr_rom_cache {scalar_t__ len; TYPE_6__* filled_head; struct csr1212_keyval* layout_head; struct csr1212_keyval* layout_tail; scalar_t__ size; int data; TYPE_6__* filled_tail; } ;
typedef int dr ;
struct TYPE_13__ {TYPE_4__* rom; } ;
struct TYPE_15__ {TYPE_5__ csr; } ;
struct TYPE_14__ {scalar_t__ offset_end; scalar_t__ offset_start; } ;
struct TYPE_12__ {int root_kv; } ;


 int FUNC_0 (struct csr1212_csr_rom_cache*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,size_t*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 struct csr1212_keyval* FUNC_5 (int ) ;
 int FUNC_6 (struct csr1212_keyval*,struct csr1212_csr_rom_cache*) ;
 int FUNC_7 (struct csr1212_keyval*) ;
 struct csr1212_csr_rom_cache* FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (struct pending_request*) ;
 int FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_6__*) ;
 TYPE_6__* FUNC_13 (int,int ) ;

__attribute__((used)) static int FUNC_14(struct file_info *VAR_7, struct pending_request *VAR_8)
{
 struct csr1212_keyval *VAR_9;
 struct csr1212_csr_rom_cache *VAR_10;
 struct csr1212_dentry *VAR_11;
 u32 VAR_12;
 int VAR_13 = 0;

 if (VAR_8->req.misc == ~0) {
  if (VAR_8->req.length == 0)
   return -VAR_3;


  for (VAR_12 = 0;
       VAR_12 < VAR_6 && VAR_7->csr1212_dirs[VAR_12];
       VAR_12++) ;

  if (VAR_12 == VAR_6)
   return -VAR_4;

  VAR_7->csr1212_dirs[VAR_12] =
      FUNC_5(VAR_0);
  if (!VAR_7->csr1212_dirs[VAR_12])
   return -VAR_4;
 } else {
  VAR_12 = VAR_8->req.misc;
  if (!VAR_7->csr1212_dirs[VAR_12])
   return -VAR_3;


  for (VAR_11 =
       VAR_7->csr1212_dirs[VAR_12]->value.directory.dentries_head;
       VAR_11; VAR_11 = VAR_11->next) {
   FUNC_4(VAR_7->host->csr.rom->
            root_kv,
            VAR_11->kv);
  }

  if (VAR_8->req.length == 0) {
   FUNC_7(VAR_7->csr1212_dirs[VAR_12]);
   VAR_7->csr1212_dirs[VAR_12] = ((void*)0);

   FUNC_10(VAR_7->host);
   FUNC_9(VAR_8);
   return 0;
  }
 }

 VAR_10 = FUNC_8(0, VAR_8->req.length);
 if (!VAR_10) {
  FUNC_7(VAR_7->csr1212_dirs[VAR_12]);
  VAR_7->csr1212_dirs[VAR_12] = ((void*)0);
  return -VAR_4;
 }

 VAR_10->filled_head = FUNC_13(sizeof(*VAR_10->filled_head), VAR_5);
 if (!VAR_10->filled_head) {
  FUNC_7(VAR_7->csr1212_dirs[VAR_12]);
  VAR_7->csr1212_dirs[VAR_12] = ((void*)0);
  FUNC_0(VAR_10);
  return -VAR_4;
 }
 VAR_10->filled_tail = VAR_10->filled_head;

 if (FUNC_1(VAR_10->data, FUNC_11(VAR_8->req.sendb),
      VAR_8->req.length)) {
  FUNC_7(VAR_7->csr1212_dirs[VAR_12]);
  VAR_7->csr1212_dirs[VAR_12] = ((void*)0);
  VAR_13 = -VAR_2;
 } else {
  VAR_10->len = VAR_8->req.length;
  VAR_10->filled_head->offset_start = 0;
  VAR_10->filled_head->offset_end = VAR_10->size - 1;

  VAR_10->layout_head = VAR_10->layout_tail = VAR_7->csr1212_dirs[VAR_12];

  VAR_13 = VAR_1;

  for (VAR_9 = VAR_10->layout_head; VAR_13 == VAR_1 && VAR_9;
       VAR_9 = VAR_9->next) {
   VAR_13 = FUNC_6(VAR_9, VAR_10);
  }


  for (VAR_11 =
       VAR_7->csr1212_dirs[VAR_12]->value.directory.dentries_head;
       VAR_13 == VAR_1 && VAR_11; VAR_11 = VAR_11->next) {
   VAR_13 =
       FUNC_3(VAR_7->host->csr.
              rom->root_kv,
              VAR_11->kv);
  }

  if (VAR_13 == VAR_1) {
   VAR_13 = FUNC_10(VAR_7->host);

   if (VAR_13 >= 0 && FUNC_2(FUNC_11(VAR_8->req.recvb),
           &VAR_12, sizeof(VAR_12))) {
    VAR_13 = -VAR_4;
   }
  }
 }
 FUNC_12(VAR_10->filled_head);
 FUNC_0(VAR_10);

 if (VAR_13 >= 0) {


  FUNC_9(VAR_8);
  return 0;
 } else {
  for (VAR_11 =
       VAR_7->csr1212_dirs[VAR_12]->value.directory.dentries_head;
       VAR_11; VAR_11 = VAR_11->next) {
   FUNC_4(VAR_7->host->csr.rom->
            root_kv,
            VAR_11->kv);
  }
  FUNC_7(VAR_7->csr1212_dirs[VAR_12]);
  VAR_7->csr1212_dirs[VAR_12] = ((void*)0);
  return VAR_13;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int length; int sendb; int address; int tag; int recvb; } ;
struct pending_request {TYPE_4__ req; } ;
struct file_info {TYPE_3__* host; } ;
typedef int status ;
typedef int quadlet_t ;
struct TYPE_10__ {TYPE_1__* cache_head; } ;
struct TYPE_7__ {int generation; TYPE_5__* rom; } ;
struct TYPE_8__ {TYPE_2__ csr; } ;
struct TYPE_6__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int*,int) ;
 int FUNC_1 (TYPE_5__*,int ,int*,int) ;
 int FUNC_2 (struct pending_request*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct file_info *VAR_4, struct pending_request *VAR_5)
{
 int VAR_6 = 0;
 quadlet_t *VAR_7 = FUNC_5(VAR_5->req.length, VAR_3);
 int VAR_8;

 if (!VAR_7)
  return -VAR_2;

 VAR_8 =
     FUNC_1(VAR_4->host->csr.rom, VAR_0,
    VAR_7, VAR_5->req.length);
 if (FUNC_0(FUNC_3(VAR_5->req.recvb), VAR_7, VAR_5->req.length))
  VAR_6 = -VAR_1;
 if (FUNC_0
     (FUNC_3(VAR_5->req.tag), &VAR_4->host->csr.rom->cache_head->len,
      sizeof(VAR_4->host->csr.rom->cache_head->len)))
  VAR_6 = -VAR_1;
 if (FUNC_0(FUNC_3(VAR_5->req.address), &VAR_4->host->csr.generation,
    sizeof(VAR_4->host->csr.generation)))
  VAR_6 = -VAR_1;
 if (FUNC_0(FUNC_3(VAR_5->req.sendb), &VAR_8, sizeof(VAR_8)))
  VAR_6 = -VAR_1;
 FUNC_4(VAR_7);
 if (VAR_6 >= 0) {
  FUNC_2(VAR_5);
 }
 return VAR_6;
}

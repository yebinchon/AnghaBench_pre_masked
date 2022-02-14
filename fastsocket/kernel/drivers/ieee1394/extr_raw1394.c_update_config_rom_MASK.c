
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int recvb; scalar_t__ misc; int length; int sendb; } ;
struct pending_request {TYPE_1__ req; } ;
struct file_info {int cfgrom_upd; int host; } ;
typedef int status ;
typedef int quadlet_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int*,int) ;
 int FUNC_2 (struct pending_request*) ;
 int FUNC_3 (int ,int *,int ,unsigned char) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct file_info *VAR_3, struct pending_request *VAR_4)
{
 int VAR_5 = 0;
 quadlet_t *VAR_6 = FUNC_6(VAR_4->req.length, VAR_2);
 if (!VAR_6)
  return -VAR_1;
 if (FUNC_0(VAR_6, FUNC_4(VAR_4->req.sendb), VAR_4->req.length)) {
  VAR_5 = -VAR_0;
 } else {
  int VAR_7 = FUNC_3(VAR_3->host,
          VAR_6, VAR_4->req.length,
          (unsigned char)VAR_4->req.
          misc);
  if (FUNC_1
      (FUNC_4(VAR_4->req.recvb), &VAR_7, sizeof(VAR_7)))
   VAR_5 = -VAR_1;
 }
 FUNC_5(VAR_6);
 if (VAR_5 >= 0) {
  FUNC_2(VAR_4);
  VAR_3->cfgrom_upd = 1;
 }
 return VAR_5;
}

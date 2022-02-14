
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int rbuf_count; int tbuf_count; int device_name; int tbufs; int rbufs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct slgt_info*,int ,int) ;
 scalar_t__ FUNC_2 (struct slgt_info*) ;
 scalar_t__ FUNC_3 (struct slgt_info*) ;
 int FUNC_4 (struct slgt_info*) ;

__attribute__((used)) static int FUNC_5(struct slgt_info *VAR_1)
{
 VAR_1->rbuf_count = 32;
 VAR_1->tbuf_count = 32;

 if (FUNC_2(VAR_1) < 0 ||
     FUNC_1(VAR_1, VAR_1->rbufs, VAR_1->rbuf_count) < 0 ||
     FUNC_1(VAR_1, VAR_1->tbufs, VAR_1->tbuf_count) < 0 ||
     FUNC_3(VAR_1) < 0) {
  FUNC_0(("%s DMA buffer alloc fail\n", VAR_1->device_name));
  return -VAR_0;
 }
 FUNC_4(VAR_1);
 return 0;
}

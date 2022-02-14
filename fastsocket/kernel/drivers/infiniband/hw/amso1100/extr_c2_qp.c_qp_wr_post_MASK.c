
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union c2wr {int dummy; } c2wr ;
typedef int u32 ;
struct c2_qp {int dummy; } ;
struct c2_mq {int dummy; } ;
struct TYPE_2__ {int magic; } ;
typedef TYPE_1__ c2wr_hdr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 union c2wr* FUNC_0 (struct c2_mq*) ;
 int FUNC_1 (struct c2_mq*) ;
 int FUNC_2 (union c2wr*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*,void*,int ) ;

__attribute__((used)) static int FUNC_5(struct c2_mq *VAR_3, union c2wr * VAR_4, struct c2_qp *VAR_5, u32 VAR_6)
{
 union c2wr *VAR_7;

 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7 == ((void*)0)) {
  return -VAR_2;
 }
 FUNC_2(VAR_4, VAR_0);




 FUNC_4((void *) VAR_7, (void *) VAR_4, VAR_6);

 FUNC_1(VAR_3);
 return 0;
}

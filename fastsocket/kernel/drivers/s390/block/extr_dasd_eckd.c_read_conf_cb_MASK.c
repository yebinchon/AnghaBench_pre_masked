
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {scalar_t__ status; struct ccw1* cpaddr; } ;
struct ccw1 {scalar_t__ cda; } ;
typedef scalar_t__ addr_t ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dasd_ccw_req*,void*) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct dasd_ccw_req *VAR_1, void *VAR_2)
{
 struct ccw1 *VAR_3;
 __u8 *VAR_4;

 if (VAR_1->status != VAR_0) {
  VAR_3 = VAR_1->cpaddr;
  VAR_4 = (__u8 *)((addr_t) VAR_3->cda);
  FUNC_1(VAR_4, 0, sizeof(*VAR_4));

  VAR_4[0] = 0xE5;
  VAR_4[1] = 0xF1;
  VAR_4[2] = 0x4B;
  VAR_4[3] = 0xF0;
 }
 FUNC_0(VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct qib_devdata {scalar_t__ rcvhdrentsize; scalar_t__ rcvhdrsize; scalar_t__ rcvhdrcnt; scalar_t__ pioavailregs_phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qib_devdata*,char*,unsigned long,unsigned long long) ;
 scalar_t__ FUNC_1 (struct qib_devdata*,int ) ;
 int FUNC_2 (struct qib_devdata*,int *) ;
 int FUNC_3 (struct qib_devdata*,int ,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct qib_devdata *VAR_6)
{
 int VAR_7 = 0;
 u64 VAR_8;

 FUNC_3(VAR_6, VAR_2, VAR_6->rcvhdrentsize);
 FUNC_3(VAR_6, VAR_3, VAR_6->rcvhdrsize);
 FUNC_3(VAR_6, VAR_1, VAR_6->rcvhdrcnt);
 FUNC_3(VAR_6, VAR_4, VAR_6->pioavailregs_phys);
 VAR_8 = FUNC_1(VAR_6, VAR_4);
 if (VAR_8 != VAR_6->pioavailregs_phys) {
  FUNC_0(VAR_6,
   "Catastrophic software error, SendPIOAvailAddr written as %lx, read back as %llx\n",
   (unsigned long) VAR_6->pioavailregs_phys,
   (unsigned long long) VAR_8);
  VAR_7 = -VAR_0;
 }
 FUNC_2(VAR_6, &VAR_5);
 return VAR_7;
}

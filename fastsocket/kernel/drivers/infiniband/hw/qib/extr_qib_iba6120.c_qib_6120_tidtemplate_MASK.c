
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_devdata {int rcvegrbufsize; unsigned int tidtemplate; scalar_t__ tidinvalid; } ;



__attribute__((used)) static void FUNC_0(struct qib_devdata *VAR_0)
{
 u32 VAR_1 = VAR_0->rcvegrbufsize;
 if (VAR_1 == 2048)
  VAR_0->tidtemplate = 1U << 29;
 else if (VAR_1 == 4096)
  VAR_0->tidtemplate = 2U << 29;
 VAR_0->tidinvalid = 0;
}

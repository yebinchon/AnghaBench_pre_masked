
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd64_pvt {scalar_t__ ext_model; int dclr0; scalar_t__ dclr1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct amd64_pvt *VAR_3)
{
 int VAR_4;

 if (VAR_3->ext_model >= VAR_0)

  VAR_4 = VAR_3->dclr0 & VAR_2;
 else

  VAR_4 = VAR_3->dclr0 & VAR_1;


 VAR_3->dclr1 = 0;

 return (VAR_4) ? 2 : 1;
}

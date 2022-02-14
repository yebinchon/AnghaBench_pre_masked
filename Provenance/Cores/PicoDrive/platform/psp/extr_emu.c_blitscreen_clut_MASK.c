
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Vertex {scalar_t__ u; scalar_t__ x; } ;
struct TYPE_3__ {scalar_t__ dirtyPal; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 struct Vertex* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct Vertex*,struct Vertex*,int) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int,int,int ,struct Vertex*) ;
 int FUNC_5 (int ,void*,int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int,int,int,char*) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(void)
{
 int VAR_22 = VAR_16;
 VAR_22 += (VAR_21 == VAR_12) ? VAR_10 : VAR_11;

 FUNC_9(0,0);
 FUNC_8(VAR_0, VAR_18);
 FUNC_5(VAR_1, (void *)VAR_22, 512);

 if (VAR_15)
 {
  if (!VAR_14) {
   FUNC_11(VAR_1, 0, 0, 0);
   FUNC_10(0,512,512,512,(char *)VAR_13 + 512*240);

   VAR_14 = 1;
  }
 }
 else
 {
  if (VAR_14) {
   FUNC_3(VAR_1,0,0xff,0);
   FUNC_11(VAR_2,0,0,0);
   FUNC_10(0,512,512,512,(char *)VAR_13 + 16);
   VAR_14 = 0;
  }

  if ((VAR_8&0x10) && VAR_7.m.dirtyPal)
   FUNC_0(0, 0);

  FUNC_12();

  if (VAR_20) {
   VAR_20 = 0;
   FUNC_2((256/8), VAR_19);
  }
 }


 if (VAR_17[0].u == 0 && VAR_17[1].u == VAR_17[1].x)
 {
  struct Vertex* VAR_23;
  int VAR_24;


  for (VAR_24 = 0; VAR_24 < VAR_17[1].x; VAR_24 += 32)
  {

   VAR_23 = (struct Vertex*)FUNC_7(2 * sizeof(struct Vertex));
   FUNC_1(VAR_23, VAR_17, 2 * sizeof(struct Vertex));
   VAR_23[0].u = VAR_23[0].x = VAR_24;
   VAR_23[1].u = VAR_23[1].x = VAR_24 + 32;
   FUNC_4(VAR_3,VAR_4|VAR_6|VAR_5,2,0,VAR_23);
  }

 }
 else

  FUNC_4(VAR_3,VAR_4|VAR_6|VAR_5,2,0,VAR_17);

 FUNC_6();
}

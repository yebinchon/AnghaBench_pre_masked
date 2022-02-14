
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ip_addr {scalar_t__ addr; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ip_addr*,int ,int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_1__ VAR_22 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,struct ip_addr*,struct ip_addr*,struct ip_addr*,int *,int *,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(void)
{
  struct ip_addr VAR_23;
  struct ip_addr VAR_24;
  struct ip_addr VAR_25;


  FUNC_1();


  FUNC_2();






  FUNC_0(&VAR_23, VAR_11, VAR_12, VAR_13, VAR_14);
  FUNC_0(&VAR_24, VAR_16, VAR_17 , VAR_18, VAR_19);
  FUNC_0(&VAR_25, VAR_7, VAR_8, VAR_9, VAR_10);
  FUNC_3(&VAR_22, &VAR_23, &VAR_24, &VAR_25, ((void*)0), &VAR_21, &VAR_20);


  FUNC_4(&VAR_22);

  if (VAR_6 == (VAR_3 | VAR_4))
  {

    VAR_22.flags |= VAR_15;


    FUNC_7(&VAR_22);





  }
  else
  {

    FUNC_5(&VAR_22);



  }


  FUNC_6(&VAR_22, VAR_5);
}

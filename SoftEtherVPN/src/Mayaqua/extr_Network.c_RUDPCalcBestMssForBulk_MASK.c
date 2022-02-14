
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT64 ;
typedef int UINT ;
struct TYPE_6__ {int YourIp; } ;
struct TYPE_5__ {scalar_t__ Protocol; } ;
typedef TYPE_1__ RUDP_STACK ;
typedef TYPE_2__ RUDP_SESSION ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

UINT FUNC_1(RUDP_STACK *VAR_4, RUDP_SESSION *VAR_5)
{
 UINT VAR_6;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }

 VAR_6 = VAR_0;


 if (FUNC_0(&VAR_5->YourIp) == 0)
 {
  VAR_6 -= 20;
 }
 else
 {
  VAR_6 -= 40;
 }

 if (VAR_4->Protocol == VAR_2)
 {

  VAR_6 -= 8;

  VAR_6 -= VAR_3;
 }
 else if (VAR_4->Protocol == VAR_1)
 {

  VAR_6 -= 8;


  VAR_6 -= 42;
 }


 VAR_6 -= VAR_3;


 VAR_6 -= VAR_3;


 VAR_6 -= sizeof(UINT64);


 VAR_6 -= 31;


 VAR_6 -= 14;


 VAR_6 -= 20;


 VAR_6 -= 20;


 VAR_6 -= 24;

 return VAR_6;
}

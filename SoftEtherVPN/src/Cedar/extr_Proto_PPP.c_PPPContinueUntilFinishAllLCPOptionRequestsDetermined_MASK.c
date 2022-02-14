
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_4__ {int ClientLCPOptionDetermined; } ;
typedef TYPE_1__ PPP_SESSION ;


 int FUNC_0 (TYPE_1__*,int *,int ,int *,int,int) ;
 int VAR_0 ;

bool FUNC_1(PPP_SESSION *VAR_1)
{
 USHORT VAR_2 = 0;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_0(VAR_1, ((void*)0), VAR_0, &VAR_2, 1, 0);

 return VAR_1->ClientLCPOptionDetermined;
}

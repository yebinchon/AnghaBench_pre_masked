
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int Data; scalar_t__ DstPort; int DstIP; scalar_t__ SrcPort; int SrcIP; } ;
typedef TYPE_1__ TCP_RAW_DATA ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int) ;

TCP_RAW_DATA *FUNC_3(IP *VAR_0, UINT VAR_1, IP *VAR_2, UINT VAR_3)
{
 TCP_RAW_DATA *VAR_4;

 if (VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_2(sizeof(TCP_RAW_DATA));

 FUNC_0(&VAR_4->SrcIP, VAR_0, sizeof(IP));
 VAR_4->SrcPort = VAR_1;

 FUNC_0(&VAR_4->DstIP, VAR_2, sizeof(IP));
 VAR_4->DstPort = VAR_3;

 VAR_4->Data = FUNC_1();

 return VAR_4;
}

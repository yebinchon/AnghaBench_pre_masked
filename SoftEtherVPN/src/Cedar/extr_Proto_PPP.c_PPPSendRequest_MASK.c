
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
struct TYPE_16__ {int Code; scalar_t__ Id; } ;
struct TYPE_15__ {int IsControl; TYPE_3__* Lcp; scalar_t__ Protocol; } ;
struct TYPE_14__ {int NextId; } ;
typedef TYPE_1__ PPP_SESSION ;
typedef TYPE_2__ PPP_PACKET ;
typedef TYPE_3__ PPP_LCP ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,TYPE_2__*,int ,int *,int,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_5 (int) ;

bool FUNC_6(PPP_SESSION *VAR_2, USHORT VAR_3, PPP_LCP *VAR_4)
{
 PPP_PACKET *VAR_5;
 PPP_PACKET *VAR_6;
 bool VAR_7 = 0;

 if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }

 VAR_5 = FUNC_5(sizeof(PPP_PACKET));
 VAR_5->Protocol = VAR_3;
 VAR_5->IsControl = 1;
 VAR_5->Lcp = VAR_4;
 VAR_5->Lcp->Id = VAR_2->NextId++;


 if (FUNC_3(VAR_2, VAR_5) == 0)
 {
  goto LABEL_ERROR;
 }


 VAR_6 = FUNC_2(VAR_2, VAR_5, 0, ((void*)0), 0, 0);

 if (VAR_6 != ((void*)0))
 {
  if (VAR_3 == VAR_1 || VAR_3 == VAR_0)
  {
   if (!FUNC_4(VAR_6->Lcp->Code))
   {

    VAR_7 = 1;
   }
  }
 }

 FUNC_1(VAR_6);
 FUNC_0(VAR_5);

 return VAR_7;

LABEL_ERROR:
 FUNC_0(VAR_5);
 return 0;
}

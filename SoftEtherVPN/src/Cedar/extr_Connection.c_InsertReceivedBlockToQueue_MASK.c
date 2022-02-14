
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ num_item; } ;
struct TYPE_13__ {scalar_t__ Size; scalar_t__ SizeofData; } ;
struct TYPE_12__ {scalar_t__ Protocol; TYPE_4__* ReceivedBlocks; TYPE_1__* Session; } ;
struct TYPE_11__ {int TotalRecvSize; int TotalRecvSizeReal; } ;
typedef TYPE_1__ SESSION ;
typedef TYPE_2__ CONNECTION ;
typedef TYPE_3__ BLOCK ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_4__*) ;

void FUNC_4(CONNECTION *VAR_2, BLOCK *VAR_3, bool VAR_4)
{
 SESSION *VAR_5;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_5 = VAR_2->Session;

 if (VAR_2->Protocol == VAR_0)
 {
  VAR_5->TotalRecvSizeReal += VAR_3->SizeofData;
  VAR_5->TotalRecvSize += VAR_3->Size;
 }

 if (VAR_4 == 0)
 {
  FUNC_2(VAR_2->ReceivedBlocks);
 }

 if (VAR_2->ReceivedBlocks->num_item < VAR_1)
 {
  FUNC_1(VAR_2->ReceivedBlocks, VAR_3);
 }
 else
 {
  FUNC_0(VAR_3);
 }

 if (VAR_4 == 0)
 {
  FUNC_3(VAR_2->ReceivedBlocks);
 }
}

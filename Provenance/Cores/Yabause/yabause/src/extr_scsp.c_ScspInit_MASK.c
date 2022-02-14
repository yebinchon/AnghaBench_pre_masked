
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pointer ;
struct TYPE_7__ {scalar_t__ (* Init ) () ;int Exec; int (* SetFetch ) (int,int,int ) ;int (* SetWriteW ) (int *) ;int (* SetWriteB ) (int *) ;int (* SetReadW ) (int *) ;int (* SetReadB ) (int *) ;} ;
struct TYPE_6__ {scalar_t__ inbreakpoint; int * BreakpointCallBack; scalar_t__ numcodebreakpoints; TYPE_1__* codebreakpoint; scalar_t__ scsptiming2; scalar_t__ scsptiming1; } ;
struct TYPE_5__ {int addr; } ;
typedef TYPE_2__ ScspInternal ;
typedef int C68K_WRITE ;
typedef int C68K_READ ;


 scalar_t__ VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_3 ;
 int * VAR_4 ;
 int * FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int *,int *) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int,int ) ;
 int FUNC_11 (int,int,int ) ;
 int FUNC_12 (int,int,int ) ;
 int FUNC_13 (int,int,int ) ;

int
FUNC_14 (int VAR_19)
{
  int VAR_20;

  if ((VAR_4 = FUNC_1 (0x80000)) == ((void*)0))
    return -1;

  if ((VAR_3 = (ScspInternal *)FUNC_2(1, sizeof(ScspInternal))) == ((void*)0))
    return -1;

  if (VAR_1->Init () != 0)
    return -1;

  VAR_1->SetReadB ((C68K_READ *)VAR_5);
  VAR_1->SetReadW ((C68K_READ *)VAR_8);
  VAR_1->SetWriteB ((C68K_WRITE *)VAR_6);
  VAR_1->SetWriteW ((C68K_WRITE *)VAR_9);

  VAR_1->SetFetch (0x000000, 0x040000, (pointer)VAR_4);
  VAR_1->SetFetch (0x040000, 0x080000, (pointer)VAR_4);
  VAR_1->SetFetch (0x080000, 0x0C0000, (pointer)VAR_4);
  VAR_1->SetFetch (0x0C0000, 0x100000, (pointer)VAR_4);

  VAR_0 = 0;

  FUNC_4 (VAR_4, &VAR_7, &VAR_18);
  VAR_3->scsptiming1 = 0;
  VAR_3->scsptiming2 = 0;

  for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++)
    VAR_3->codebreakpoint[VAR_20].addr = 0xFFFFFFFF;
  VAR_3->numcodebreakpoints = 0;
  VAR_3->BreakpointCallBack = ((void*)0);
  VAR_3->inbreakpoint = 0;

  VAR_10 = VAR_1->Exec;


  VAR_16 = 44100 / 60;
  VAR_12 = 263;
  VAR_13 = 10;
  VAR_14 = VAR_16 * VAR_13;
  if (FUNC_3 () < 0)
    return -1;


  VAR_15 = 0;
  VAR_17 = 0;
  VAR_11 = 0;

  return FUNC_0 (VAR_19);
}

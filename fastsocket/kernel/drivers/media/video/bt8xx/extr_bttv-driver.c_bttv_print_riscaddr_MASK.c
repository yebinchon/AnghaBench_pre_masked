
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {scalar_t__ dma; } ;
struct TYPE_23__ {TYPE_7__* bottom; TYPE_5__* top; } ;
struct bttv {TYPE_12__ main; TYPE_11__* screen; TYPE_8__ curr; TYPE_3__* cvbi; } ;
struct TYPE_24__ {scalar_t__ dma; } ;
struct TYPE_21__ {scalar_t__ dma; } ;
struct TYPE_22__ {TYPE_6__ bottom; } ;
struct TYPE_19__ {scalar_t__ dma; } ;
struct TYPE_20__ {TYPE_4__ top; } ;
struct TYPE_17__ {scalar_t__ dma; } ;
struct TYPE_16__ {scalar_t__ dma; } ;
struct TYPE_18__ {TYPE_2__ bottom; TYPE_1__ top; } ;
struct TYPE_13__ {scalar_t__ dma; } ;
struct TYPE_14__ {TYPE_10__ bottom; TYPE_9__ top; } ;


 int FUNC_0 (struct bttv*,TYPE_12__*) ;
 int FUNC_1 (char*,unsigned long long,...) ;

__attribute__((used)) static void FUNC_2(struct bttv *VAR_0)
{
 FUNC_1("  main: %08Lx\n",
        (unsigned long long)VAR_0->main.dma);
 FUNC_1("  vbi : o=%08Lx e=%08Lx\n",
        VAR_0->cvbi ? (unsigned long long)VAR_0->cvbi->top.dma : 0,
        VAR_0->cvbi ? (unsigned long long)VAR_0->cvbi->bottom.dma : 0);
 FUNC_1("  cap : o=%08Lx e=%08Lx\n",
        VAR_0->curr.top ? (unsigned long long)VAR_0->curr.top->top.dma : 0,
        VAR_0->curr.bottom ? (unsigned long long)VAR_0->curr.bottom->bottom.dma : 0);
 FUNC_1("  scr : o=%08Lx e=%08Lx\n",
        VAR_0->screen ? (unsigned long long)VAR_0->screen->top.dma : 0,
        VAR_0->screen ? (unsigned long long)VAR_0->screen->bottom.dma : 0);
 FUNC_0(VAR_0, &VAR_0->main);
}

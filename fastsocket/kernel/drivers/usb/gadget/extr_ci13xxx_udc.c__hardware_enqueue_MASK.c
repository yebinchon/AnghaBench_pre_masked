
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int status; int length; unsigned int dma; scalar_t__ zero; int buf; } ;
struct ci13xxx_req {int map; TYPE_2__ req; int dma; TYPE_5__* ptr; } ;
struct ci13xxx_ep {int dir; scalar_t__ type; int num; TYPE_4__* qh; int device; } ;
struct TYPE_10__ {int token; unsigned int* page; int next; } ;
struct TYPE_9__ {TYPE_3__* ptr; } ;
struct TYPE_6__ {int token; int next; } ;
struct TYPE_8__ {int cap; TYPE_1__ td; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 unsigned int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,size_t,int) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 int FUNC_5 (char*,struct ci13xxx_ep*,struct ci13xxx_req*) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct ci13xxx_ep *VAR_14, struct ci13xxx_req *VAR_15)
{
 unsigned VAR_16;

 FUNC_5("%p, %p", VAR_14, VAR_15);


 if (VAR_15->req.status == -VAR_2)
  return -VAR_2;

 if (FUNC_2(VAR_14->num, VAR_14->dir))
  return -VAR_3;

 VAR_15->req.status = -VAR_2;

 if (VAR_15->req.length && !VAR_15->req.dma) {
  VAR_15->req.dma = FUNC_0(VAR_14->device, VAR_15->req.buf,

           VAR_15->req.length, VAR_14->dir ?
           VAR_1 : VAR_0);
  if (VAR_15->req.dma == 0)
   return -VAR_4;

  VAR_15->map = 1;
 }





 FUNC_4(VAR_15->ptr, 0, sizeof(*VAR_15->ptr));
 VAR_15->ptr->next |= VAR_11;
 VAR_15->ptr->token = VAR_15->req.length << FUNC_1(VAR_12);
 VAR_15->ptr->token &= VAR_12;
 VAR_15->ptr->token |= VAR_7;
 VAR_15->ptr->token |= VAR_10;
 VAR_15->ptr->page[0] = VAR_15->req.dma;
 for (VAR_16 = 1; VAR_16 < 5; VAR_16++)
  VAR_15->ptr->page[VAR_16] =
   (VAR_15->req.dma + VAR_16 * VAR_5) & ~VAR_8;






 VAR_14->qh[VAR_14->dir].ptr->td.next = VAR_15->dma;
 VAR_14->qh[VAR_14->dir].ptr->td.token &= ~VAR_9;
 if (VAR_15->req.zero == 0)
  VAR_14->qh[VAR_14->dir].ptr->cap |= VAR_6;
 else
  VAR_14->qh[VAR_14->dir].ptr->cap &= ~VAR_6;

 FUNC_6();

 return FUNC_3(VAR_14->num, VAR_14->dir,
      VAR_14->type == VAR_13);
}

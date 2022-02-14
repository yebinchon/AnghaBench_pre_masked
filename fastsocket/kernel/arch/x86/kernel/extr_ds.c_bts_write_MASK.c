
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int context; } ;
struct bts_tracer {TYPE_4__ ds; } ;
struct TYPE_7__ {int clock; int pid; } ;
struct TYPE_6__ {int from; int to; } ;
struct TYPE_8__ {TYPE_2__ event; TYPE_1__ lbr; } ;
struct bts_struct {int qualifier; TYPE_3__ variant; } ;
struct TYPE_10__ {int* sizeof_rec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned char*,int ,int) ;


 int VAR_9 ;
 size_t VAR_10 ;
 TYPE_5__ VAR_11 ;
 int FUNC_1 (int ,size_t,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct bts_tracer *VAR_12, const struct bts_struct *VAR_13)
{
 unsigned char VAR_14[VAR_2];

 if (!VAR_12)
  return -VAR_0;

 if (VAR_2 < VAR_11.sizeof_rec[VAR_10])
  return -VAR_1;

 switch (VAR_13->qualifier) {
 case 130:
  FUNC_0(VAR_14, VAR_6, 0);
  FUNC_0(VAR_14, VAR_9, 0);
  FUNC_0(VAR_14, VAR_5, 0);
  break;
 case 131:
  FUNC_0(VAR_14, VAR_6, VAR_13->variant.lbr.from);
  FUNC_0(VAR_14, VAR_9, VAR_13->variant.lbr.to);
  FUNC_0(VAR_14, VAR_5, 0);
  break;
 case 129:
 case 128:
  FUNC_0(VAR_14, VAR_8, (VAR_4 | VAR_13->qualifier));
  FUNC_0(VAR_14, VAR_3, VAR_13->variant.event.clock);
  FUNC_0(VAR_14, VAR_7, VAR_13->variant.event.pid);
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_12->ds.context, VAR_10, VAR_14,
   VAR_11.sizeof_rec[VAR_10]);
}

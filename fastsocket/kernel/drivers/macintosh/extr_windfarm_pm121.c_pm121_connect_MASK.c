
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_7__ {int slope; scalar_t__ offset; } ;
struct TYPE_9__ {unsigned int control_id; size_t ref_id; TYPE_2__ correction; } ;
struct TYPE_8__ {int name; TYPE_1__* ops; } ;
struct TYPE_6__ {int (* get_value ) (TYPE_3__*,int*) ;} ;


 TYPE_3__** VAR_0 ;
 int FUNC_0 (int,int) ;
 TYPE_4__* VAR_1 ;
 int FUNC_1 (char*,int ,int ,int,int) ;
 int FUNC_2 (TYPE_3__*,int*) ;

__attribute__((used)) static s32 FUNC_3(unsigned int VAR_2, s32 VAR_3)
{
 s32 VAR_4, VAR_5, VAR_6;

 if (VAR_1->control_id == VAR_2) {
  VAR_0[VAR_2]->ops->get_value(VAR_0[VAR_2],
           &VAR_5);
  VAR_4 = VAR_5 * VAR_1->correction.slope;
  VAR_4 += VAR_1->correction.offset;
  if (VAR_4 > 0) {
   VAR_6 = FUNC_0(VAR_3, (VAR_4 >> 16));
   if (VAR_6 != VAR_3) {
    FUNC_1("pm121: %s depending on %s, "
      "corrected from %d to %d RPM\n",
      VAR_0[VAR_2]->name,
      VAR_0[VAR_1->ref_id]->name,
      (int) VAR_3, (int) VAR_6);
   }
  } else
   VAR_6 = VAR_3;
 }

 else
  VAR_6 = VAR_3;

 return VAR_6;
}

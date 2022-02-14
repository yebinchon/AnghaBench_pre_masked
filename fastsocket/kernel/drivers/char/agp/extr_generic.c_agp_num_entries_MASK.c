
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int num_entries; } ;
struct TYPE_13__ {int num_entries; } ;
struct TYPE_12__ {int num_entries; } ;
struct TYPE_11__ {int num_entries; } ;
struct TYPE_10__ {int num_entries; } ;
struct TYPE_9__ {TYPE_1__* driver; void* current_size; } ;
struct TYPE_8__ {int size_type; } ;


 TYPE_7__* FUNC_0 (void*) ;
 TYPE_6__* FUNC_1 (void*) ;
 TYPE_5__* FUNC_2 (void*) ;
 TYPE_4__* FUNC_3 (void*) ;
 TYPE_3__* FUNC_4 (void*) ;


 int VAR_0 ;



 TYPE_2__* VAR_1 ;
 int VAR_2 ;

int FUNC_5(void)
{
 int VAR_3;
 void *VAR_4;

 VAR_4 = VAR_1->current_size;

 switch (VAR_1->driver->size_type) {
 case 128:
  VAR_3 = FUNC_2(VAR_4)->num_entries;
  break;
 case 130:
  VAR_3 = FUNC_0(VAR_4)->num_entries;
  break;
 case 129:
  VAR_3 = FUNC_1(VAR_4)->num_entries;
  break;
 case 131:
  VAR_3 = FUNC_4(VAR_4)->num_entries;
  break;
 case 132:
  VAR_3 = FUNC_3(VAR_4)->num_entries;
  break;
 default:
  VAR_3 = 0;
  break;
 }

 VAR_3 -= VAR_2>>VAR_0;
 if (VAR_3<0)
  VAR_3 = 0;
 return VAR_3;
}

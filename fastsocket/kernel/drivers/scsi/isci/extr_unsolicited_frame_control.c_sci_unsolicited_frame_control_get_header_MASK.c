
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {TYPE_2__* array; } ;
struct sci_unsolicited_frame_control {TYPE_3__ buffers; } ;
typedef enum sci_status { ____Placeholder_sci_status } sci_status ;
struct TYPE_5__ {TYPE_1__* header; } ;
struct TYPE_4__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;

enum sci_status FUNC_0(struct sci_unsolicited_frame_control *VAR_3,
        u32 VAR_4,
        void **VAR_5)
{
 if (VAR_4 < VAR_2) {



  *VAR_5 = &VAR_3->buffers.array[VAR_4].header->data;

  return VAR_1;
 }

 return VAR_0;
}

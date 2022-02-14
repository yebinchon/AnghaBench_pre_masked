
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* c_segment_t ;
typedef int boolean_t ;
struct TYPE_6__ {int asked_permission; } ;
struct TYPE_5__ {scalar_t__ c_bytes_used; scalar_t__ c_nextoffset; scalar_t__ c_nextslot; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;

boolean_t
FUNC_0(
 c_segment_t VAR_6,
 c_segment_t VAR_7)
{

 VAR_5.asked_permission++;

 if (VAR_7->c_bytes_used >= VAR_0 &&
     VAR_6->c_bytes_used >= VAR_0)
  return (VAR_3);

 if (VAR_6->c_nextoffset >= VAR_1 || VAR_6->c_nextslot >= VAR_2) {



  return (VAR_3);
 }

 return (VAR_4);
}

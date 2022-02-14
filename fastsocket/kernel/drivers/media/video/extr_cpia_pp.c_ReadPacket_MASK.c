
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct pp_cam_entry {TYPE_2__* port; } ;
struct TYPE_4__ {scalar_t__ mode; } ;
struct TYPE_5__ {TYPE_1__ ieee1284; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_cam_entry*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct pp_cam_entry*,int ) ;
 size_t FUNC_2 (TYPE_2__*,int *,size_t,int ) ;
 size_t FUNC_3 (TYPE_2__*,int *,size_t) ;

__attribute__((used)) static int FUNC_4(struct pp_cam_entry *VAR_3, u8 *VAR_4, size_t VAR_5)
{
 int VAR_6=0;

 if (VAR_4 == ((void*)0)) {
  return -VAR_0;
 }
 if (FUNC_1(VAR_3, 0)) {
  return -VAR_1;
 }


 if(VAR_3->port->ieee1284.mode == VAR_2) {
  if(FUNC_2(VAR_3->port, VAR_4, VAR_5, 0) != VAR_5)
   VAR_6 = -VAR_1;
 } else {
  if(FUNC_3(VAR_3->port, VAR_4, VAR_5) != VAR_5)
   VAR_6 = -VAR_1;
 }
 FUNC_0(VAR_3);
 return VAR_6;
}

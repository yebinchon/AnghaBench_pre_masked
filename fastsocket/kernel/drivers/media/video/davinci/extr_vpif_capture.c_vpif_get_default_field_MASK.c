
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpif_interface {scalar_t__ if_type; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline enum v4l2_field FUNC_0(
    struct vpif_interface *VAR_3)
{
 return (VAR_3->if_type == VAR_2) ? VAR_1 :
      VAR_0;
}

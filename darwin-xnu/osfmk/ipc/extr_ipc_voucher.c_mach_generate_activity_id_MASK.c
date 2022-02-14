
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mach_generate_activity_id_args {scalar_t__ count; int activity_id; } ;
typedef int kern_return_t ;
typedef int activity_id ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (scalar_t__) ;

kern_return_t
FUNC_2(
 struct mach_generate_activity_id_args *VAR_3)
{
 uint64_t VAR_4;
 kern_return_t VAR_5 = VAR_1;

 if (VAR_3->count <= 0 || VAR_3->count > VAR_2) {
  return VAR_0;
 }

 VAR_4 = FUNC_1(VAR_3->count);
 VAR_5 = FUNC_0(&VAR_4, VAR_3->activity_id, sizeof (VAR_4));

 return (VAR_5);
}

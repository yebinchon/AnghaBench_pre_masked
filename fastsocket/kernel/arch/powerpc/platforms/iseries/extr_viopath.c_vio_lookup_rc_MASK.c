
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct vio_error_entry {scalar_t__ rc; } ;


 struct vio_error_entry* VAR_0 ;
 struct vio_error_entry const VAR_1 ;
 struct vio_error_entry const VAR_2 ;

const struct vio_error_entry *FUNC_0(
  const struct vio_error_entry *VAR_3, u16 VAR_4)
{
 const struct vio_error_entry *VAR_5;

 if (!VAR_4)
  return &VAR_1;
 if (VAR_3)
  for (VAR_5 = VAR_3; VAR_5->rc; ++VAR_5)
   if (VAR_5->rc == VAR_4)
    return VAR_5;
 for (VAR_5 = VAR_0; VAR_5->rc; ++VAR_5)
  if (VAR_5->rc == VAR_4)
   return VAR_5;
 return &VAR_2;
}

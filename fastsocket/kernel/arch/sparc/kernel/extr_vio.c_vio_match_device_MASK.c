
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_device_id {scalar_t__* compat; scalar_t__* type; } ;
struct vio_dev {char* type; char* compat; int compat_len; } ;


 scalar_t__ FUNC_0 (char const*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,char const*) ;

__attribute__((used)) static const struct vio_device_id *FUNC_2(
 const struct vio_device_id *VAR_0,
 const struct vio_dev *VAR_1)
{
 const char *VAR_2, *VAR_3;
 int VAR_4;

 VAR_2 = VAR_1->type;
 VAR_3 = VAR_1->compat;
 VAR_4 = VAR_1->compat_len;

 while (VAR_0->type[0] || VAR_0->compat[0]) {
  int VAR_5 = 1;
  if (VAR_0->type[0])
   VAR_5 &= !FUNC_1(VAR_0->type, VAR_2);

  if (VAR_0->compat[0]) {
   VAR_5 &= VAR_4 &&
    FUNC_0(VAR_3, VAR_0->compat, VAR_4);
  }
  if (VAR_5)
   return VAR_0;
  VAR_0++;
 }
 return ((void*)0);
}

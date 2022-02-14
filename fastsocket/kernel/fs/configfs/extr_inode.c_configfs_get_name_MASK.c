
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct configfs_dirent {int s_type; struct configfs_attribute* s_element; TYPE_2__* s_dentry; } ;
struct configfs_attribute {unsigned char const* ca_name; } ;
struct TYPE_3__ {unsigned char const* name; } ;
struct TYPE_4__ {TYPE_1__ d_name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

const unsigned char * FUNC_1(struct configfs_dirent *VAR_3)
{
 struct configfs_attribute *VAR_4;

 FUNC_0(!VAR_3 || !VAR_3->s_element);


 if (VAR_3->s_type & (VAR_0 | VAR_2))
  return VAR_3->s_dentry->d_name.name;

 if (VAR_3->s_type & VAR_1) {
  VAR_4 = VAR_3->s_element;
  return VAR_4->ca_name;
 }
 return ((void*)0);
}

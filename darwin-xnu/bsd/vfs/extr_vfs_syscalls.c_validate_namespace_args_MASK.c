
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user64_namespace_handler_info_ext ;
typedef int user64_namespace_handler_info ;
typedef int user64_namespace_handler_data ;
typedef int user32_namespace_handler_info_ext ;
typedef int user32_namespace_handler_info ;
typedef int user32_namespace_handler_data ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0 (int VAR_1, int VAR_2) {

 if (VAR_1) {

  if (VAR_2 == sizeof(user64_namespace_handler_info)) {
   goto sizeok;
  }
  if (VAR_2 == sizeof(user64_namespace_handler_info_ext)) {
   goto sizeok;
  }
  if (VAR_2 == sizeof(user64_namespace_handler_data)) {
   goto sizeok;
  }
  return VAR_0;
 }
 else {

  if (VAR_2 == sizeof(user32_namespace_handler_info)) {
   goto sizeok;
  }
  if (VAR_2 == sizeof(user32_namespace_handler_info_ext)) {
   goto sizeok;
  }
  if (VAR_2 == sizeof(user32_namespace_handler_data)) {
   goto sizeok;
  }
  return VAR_0;
 }

sizeok:

 return 0;

}

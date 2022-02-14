
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* filename; } ;
typedef TYPE_1__ DIR_ENTRY ;



__attribute__((used)) static inline bool FUNC_0 (DIR_ENTRY* VAR_0) {
 return ((VAR_0->filename[0] == '.') && ((VAR_0->filename[1] == '\0') ||
  ((VAR_0->filename[1] == '.') && VAR_0->filename[2] == '\0')));
}

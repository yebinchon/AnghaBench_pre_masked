
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;







 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_1, const char *VAR_2)
{
  switch(VAR_0) {

  case 132:
    FUNC_0(VAR_1, "You don't have permission to create %s.\n", VAR_2);
    break;


  case 130:
    FUNC_0(VAR_1, "The directory name %s is too long.\n", VAR_2);
    break;


  case 128:
    FUNC_0(VAR_1, "%s resides on a read-only file system.\n", VAR_2);
    break;


  case 129:
    FUNC_0(VAR_1, "No space left on the file system that will "
            "contain the directory %s.\n", VAR_2);
    break;


  case 131:
    FUNC_0(VAR_1, "Cannot create directory %s because you "
            "exceeded your quota.\n", VAR_2);
    break;

  default :
    FUNC_0(VAR_1, "Error creating directory %s.\n", VAR_2);
    break;
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dc; } ;
typedef int GLenum ;
typedef TYPE_1__ GLContext ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int,char**) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 int * VAR_11 ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,char*,...) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 () ;
 char* FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_14 () ;
 char* FUNC_15 (int) ;
 int FUNC_16 () ;
 char* FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 () ;
 int * VAR_13 ;
 int * VAR_14 ;
 scalar_t__ FUNC_20 (int ) ;
 scalar_t__ FUNC_21 () ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 () ;

int
FUNC_24 (int VAR_15, char** VAR_16)
{
  GLenum VAR_17;
  GLContext VAR_18;



  if (VAR_5 == FUNC_4(VAR_15-1, VAR_16+1))
  {







    FUNC_9(VAR_13, "Usage: visualinfo [-h] [-display <display>] [-visual <id>]\n");
    FUNC_9(VAR_13, "        -h: this screen\n");
    FUNC_9(VAR_13, "        -display <display>: use given display\n");
    FUNC_9(VAR_13, "        -visual <id>: use given visual\n");

    return 1;
  }



  FUNC_3(&VAR_18);
  if (VAR_5 == FUNC_0(&VAR_18))
  {
    FUNC_9(VAR_13, "Error: CreateContext failed\n");
    FUNC_2(&VAR_18);
    return 1;
  }



  VAR_12 = VAR_5;
  VAR_17 = FUNC_16();

  if (VAR_0 != VAR_17)
  {
    FUNC_9(VAR_13, "Error [main]: glewInit failed: %s\n", FUNC_15(VAR_17));
    FUNC_2(&VAR_18);
    return 1;
  }
  VAR_11 = VAR_14;





  FUNC_9(VAR_11, "OpenGL vendor string: %s\n", FUNC_10(VAR_6));
  FUNC_9(VAR_11, "OpenGL renderer string: %s\n", FUNC_10(VAR_4));
  FUNC_9(VAR_11, "OpenGL version string: %s\n", FUNC_10(VAR_7));
  FUNC_9(VAR_11, "OpenGL extensions (GL_): \n");
  FUNC_5((char*)FUNC_10(VAR_3));



  FUNC_9(VAR_11, "GLU version string: %s\n", FUNC_17(VAR_2));
  FUNC_9(VAR_11, "GLU extensions (GLU_): \n");
  FUNC_5((char*)FUNC_17(VAR_1));
  FUNC_9(VAR_11, "GLX extensions (GLX_): \n");
  FUNC_5(FUNC_12(FUNC_11(),
                                           FUNC_1(FUNC_11())));




  FUNC_6(&VAR_18);



  FUNC_2(&VAR_18);
  if (VAR_11 != VAR_14)
    FUNC_7(VAR_11);
  return 0;
}

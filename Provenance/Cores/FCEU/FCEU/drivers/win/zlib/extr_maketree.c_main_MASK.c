
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zfree; scalar_t__ opaque; int zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef scalar_t__ voidpf ;
typedef int uInt ;
typedef int inflate_huft ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int*,int*,int **,int **,TYPE_1__*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_5(void)
{
  int VAR_3;
  uInt VAR_4, VAR_5;
  inflate_huft *VAR_6, *VAR_7;
  z_stream VAR_8;

  VAR_8.zalloc = VAR_1;
  VAR_8.opaque = (voidpf)0;
  VAR_8.zfree = VAR_2;
  VAR_3 = FUNC_1(&VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8);
  if (VAR_3)
  {
    FUNC_0(VAR_0, "inflate_trees_fixed error %d\n", VAR_3);
    return;
  }
  FUNC_4("/* inffixed.h -- table for decoding fixed codes");
  FUNC_4(" * Generated automatically by the maketree.c program");
  FUNC_4(" */");
  FUNC_4("");
  FUNC_4("/* WARNING: this file should *not* be used by applications. It is");
  FUNC_4("   part of the implementation of the compression library and is");
  FUNC_4("   subject to change. Applications should only use zlib.h.");
  FUNC_4(" */");
  FUNC_4("");
  FUNC_3("local uInt fixed_bl = %d;\n", VAR_4);
  FUNC_3("local uInt fixed_bd = %d;\n", VAR_5);
  FUNC_3("local inflate_huft fixed_tl[] = {");
  FUNC_2(VAR_4, VAR_6);
  FUNC_4("  };");
  FUNC_3("local inflate_huft fixed_td[] = {");
  FUNC_2(VAR_5, VAR_7);
  FUNC_4("  };");
}

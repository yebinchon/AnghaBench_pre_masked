
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct quakefile_s {int length; int offset; int filename; } ;
struct TYPE_3__ {int ident; int version; } ;
typedef TYPE_1__ idheader_t ;


 int FUNC_0 (char*,int,int,int,int,scalar_t__) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_11 () ;
 int FUNC_12 (struct quakefile_s*) ;
 int FUNC_13 (struct quakefile_s*,TYPE_1__*,int ,int) ;
 int FUNC_14 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int ,int ) ;

int FUNC_18(struct quakefile_s *VAR_10)
{
 idheader_t VAR_11;

 if (FUNC_13(VAR_10, &VAR_11, 0, sizeof(idheader_t)) != sizeof(idheader_t))
 {
  return 0;
 }

 VAR_11.ident = FUNC_4(VAR_11.ident);
 VAR_11.version = FUNC_4(VAR_11.version);

 if (VAR_11.ident == VAR_4 && VAR_11.version == VAR_5)
 {
  FUNC_14();
  FUNC_12(VAR_10);
  FUNC_11();
 }

 else if (VAR_11.ident == VAR_2 && VAR_11.version == VAR_3)
 {
  FUNC_14();
  FUNC_8();
  FUNC_10(VAR_10->filename, VAR_10->offset, VAR_10->length);
  FUNC_9();
 }

 else if ((VAR_11.ident == VAR_8 && VAR_11.version == VAR_9) ||

    (VAR_11.ident == VAR_6 && VAR_11.version == VAR_7))
 {
  FUNC_14();
  FUNC_15();
  FUNC_17(VAR_10->filename, VAR_10->offset, VAR_10->length);
  FUNC_16();
 }

 else if (VAR_11.ident == VAR_1)
 {
  FUNC_14();
  FUNC_5();
  FUNC_7(VAR_10->filename, VAR_10->offset, VAR_10->length);
  FUNC_6();
 }

 else if (VAR_11.ident == VAR_0)
 {
  FUNC_14();
  FUNC_1();
  FUNC_3(VAR_10->filename, VAR_10->offset, VAR_10->length);
  FUNC_2();
 }
 else
 {
  FUNC_0("unknown BSP format %c%c%c%c, version %d\n",
          (VAR_11.ident & 0xFF),
          ((VAR_11.ident >> 8) & 0xFF),
          ((VAR_11.ident >> 16) & 0xFF),
          ((VAR_11.ident >> 24) & 0xFF), VAR_11.version);
  return 0;
 }

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apply_microcode_ctx {int err; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct apply_microcode_ctx*,int) ;

__attribute__((used)) static int FUNC_1(int VAR_1)
{
 struct apply_microcode_ctx VAR_2 = { .err = 0 };
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_2, 1);
 if (!VAR_3)
  VAR_3 = VAR_2.err;

 return VAR_3;
}

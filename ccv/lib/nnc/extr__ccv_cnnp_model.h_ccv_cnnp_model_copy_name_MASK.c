
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ ccv_cnnp_model_t ;


 scalar_t__ FUNC_0 (size_t const) ;
 int FUNC_1 (char*,char const* const,size_t const) ;
 size_t FUNC_2 (char const* const,int) ;

__attribute__((used)) static inline void FUNC_3(ccv_cnnp_model_t* const VAR_0, const char* const VAR_1)
{
 if (VAR_1)
 {
  const size_t VAR_2 = FUNC_2(VAR_1, 63);
  const size_t VAR_3 = VAR_2 + 1;
  VAR_0->name = (char*)FUNC_0(VAR_3);

  FUNC_1(VAR_0->name, VAR_1, VAR_3);
  VAR_0->name[VAR_2] = 0;
 }
}

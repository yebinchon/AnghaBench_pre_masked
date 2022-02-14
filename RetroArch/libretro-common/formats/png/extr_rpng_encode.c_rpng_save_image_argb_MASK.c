
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int intfstream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (int const*,int *,unsigned int,unsigned int,int,int) ;

bool FUNC_4(const char *VAR_2, const uint32_t *VAR_3,
      unsigned VAR_4, unsigned VAR_5, unsigned VAR_6)
{
   bool VAR_7 = 0;
   intfstream_t* VAR_8 = ((void*)0);

   VAR_8 = FUNC_2(VAR_2,
         VAR_1,
         VAR_0);

   VAR_7 = FUNC_3((const uint8_t*) VAR_3, VAR_8,
                                VAR_4, VAR_5,
                                (signed) VAR_6, sizeof(uint32_t));
   FUNC_1(VAR_8);
   FUNC_0(VAR_8);
   return VAR_7;
}

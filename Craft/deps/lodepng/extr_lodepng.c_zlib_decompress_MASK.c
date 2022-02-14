
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* custom_zlib ) (unsigned char**,size_t*,unsigned char const*,size_t,TYPE_1__ const*) ;} ;
typedef TYPE_1__ LodePNGDecompressSettings ;


 int FUNC_0 (unsigned char**,size_t*,unsigned char const*,size_t,TYPE_1__ const*) ;
 int FUNC_1 (unsigned char**,size_t*,unsigned char const*,size_t,TYPE_1__ const*) ;

__attribute__((used)) static unsigned FUNC_2(unsigned char** VAR_0, size_t* VAR_1, const unsigned char* VAR_2,
                                size_t VAR_3, const LodePNGDecompressSettings* VAR_4)
{
  if(VAR_4->custom_zlib)
    return VAR_4->custom_zlib(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  else
    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}

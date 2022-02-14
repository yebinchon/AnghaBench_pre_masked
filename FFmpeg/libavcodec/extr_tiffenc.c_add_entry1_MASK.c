
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef enum TiffTypes { ____Placeholder_TiffTypes } TiffTypes ;
typedef enum TiffTags { ____Placeholder_TiffTags } TiffTags ;
typedef int TiffEncoderContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int,void*) ;

__attribute__((used)) static int FUNC_1(TiffEncoderContext *VAR_1,
                      enum TiffTags VAR_2, enum TiffTypes VAR_3, int VAR_4)
{
    uint16_t VAR_5 = VAR_4;
    uint32_t VAR_6 = VAR_4;
    return FUNC_0(VAR_1, VAR_2, VAR_3, 1,
                     VAR_3 == VAR_0 ? (void *)&VAR_5 : (void *)&VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVChromaLocation { ____Placeholder_AVChromaLocation } AVChromaLocation ;
typedef int WriterContext ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(WriterContext *VAR_1, enum AVChromaLocation VAR_2)
{
    const char *VAR_3 = FUNC_0(VAR_2);
    if (!VAR_3 || VAR_2 == VAR_0) {
        FUNC_2("chroma_location", "unspecified");
    } else {
        FUNC_1("chroma_location", VAR_3);
    }
}

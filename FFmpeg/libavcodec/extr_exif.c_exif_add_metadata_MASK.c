
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetByteContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,char const*,int) ;
 int FUNC_1 (void*,char*,int) ;
 int FUNC_2 (int,char const*,char const*,int *,int,int,int **) ;
 int FUNC_3 (int,char const*,char const*,int *,int,int **) ;
 int FUNC_4 (int,char const*,char const*,int *,int,int **) ;
 int FUNC_5 (int,char const*,char const*,int *,int,int **) ;
 int FUNC_6 (int,char const*,char const*,int *,int,int,int **) ;
 int FUNC_7 (int,char const*,int *,int,int **) ;

__attribute__((used)) static int FUNC_8(void *VAR_1, int VAR_2, int VAR_3,
                             const char *VAR_4, const char *VAR_5,
                             GetByteContext *VAR_6, int VAR_7,
                             AVDictionary **VAR_8)
{
    switch(VAR_3) {
    case 0:
        FUNC_0(VAR_1, VAR_0,
               "Invalid TIFF tag type 0 found for %s with size %d\n",
               VAR_4, VAR_2);
        return 0;
    case 137 : return FUNC_3(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    case 130 : return FUNC_6(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, 1, VAR_8);
    case 133 : return FUNC_6(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, 0, VAR_8);
    case 134 : return FUNC_2(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, 1, VAR_8);
    case 138 :
    case 128: return FUNC_2(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, 0, VAR_8);
    case 129 : return FUNC_7(VAR_2, VAR_4, VAR_6, VAR_7, VAR_8);
    case 131:
    case 135 : return FUNC_5(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    case 132 :
    case 136 : return FUNC_4(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    default:
        FUNC_1(VAR_1, "TIFF tag type (%u)", VAR_3);
        return 0;
    };
}

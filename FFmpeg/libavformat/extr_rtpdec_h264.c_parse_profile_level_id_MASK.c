
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_3__ {void* level_idc; void* profile_iop; void* profile_idc; } ;
typedef TYPE_1__ PayloadContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,void*,void*,void*) ;
 void* FUNC_1 (char*,int *,int) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_1,
                                   PayloadContext *VAR_2,
                                   const char *VAR_3)
{
    char VAR_4[3];

    uint8_t VAR_5;
    uint8_t VAR_6;
    uint8_t VAR_7;

    VAR_4[0] = VAR_3[0];
    VAR_4[1] = VAR_3[1];
    VAR_4[2] = '\0';
    VAR_5 = FUNC_1(VAR_4, ((void*)0), 16);
    VAR_4[0] = VAR_3[2];
    VAR_4[1] = VAR_3[3];
    VAR_6 = FUNC_1(VAR_4, ((void*)0), 16);
    VAR_4[0] = VAR_3[4];
    VAR_4[1] = VAR_3[5];
    VAR_7 = FUNC_1(VAR_4, ((void*)0), 16);

    FUNC_0(VAR_1, VAR_0,
           "RTP Profile IDC: %x Profile IOP: %x Level: %x\n",
           VAR_5, VAR_6, VAR_7);
    VAR_2->profile_idc = VAR_5;
    VAR_2->profile_iop = VAR_6;
    VAR_2->level_idc = VAR_7;
}

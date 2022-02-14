
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pa_context ;
typedef enum PulseAudioContextState { ____Placeholder_PulseAudioContextState } PulseAudioContextState ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(pa_context *VAR_2, void *VAR_3)
{
    enum PulseAudioContextState *VAR_4 = VAR_3;

    switch (FUNC_0(VAR_2)) {
    case 130:
    case 128:
        *VAR_4 = VAR_0;
        break;
    case 129:
        *VAR_4 = VAR_1;
        break;
    default:
        break;
    }
}

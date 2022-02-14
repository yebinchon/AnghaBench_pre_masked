
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtc_cpu_freq_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static rtc_cpu_freq_t FUNC_4(rtc_cpu_freq_t VAR_1, rtc_cpu_freq_t VAR_2)
{
    int VAR_3 = FUNC_3(VAR_1);
    int VAR_4 = FUNC_3(VAR_2);
    int VAR_5 = FUNC_0(VAR_3, VAR_4);
    rtc_cpu_freq_t VAR_6 = VAR_0;
    if (!FUNC_2(VAR_5/1000000, &VAR_6)) {
        FUNC_1(0 && "unsupported frequency");
    }
    return VAR_6;
}

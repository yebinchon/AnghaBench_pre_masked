
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_data {size_t remaining_bytes; int paused; scalar_t__ response_received; } ;


 size_t VAR_0 ;
 int FUNC_0 (void*,char,size_t) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_1, size_t VAR_2, size_t VAR_3,
                            void *VAR_4)
{
  struct cb_data *VAR_5 = (struct cb_data *)VAR_4;


  if(VAR_5->response_received) {
    size_t VAR_6 = VAR_3 * VAR_2;

    size_t VAR_7 = VAR_5->remaining_bytes;
    if(VAR_7 > VAR_6) {
      VAR_7 = VAR_6;
    }

    FUNC_0(VAR_1, 'a', VAR_7);
    VAR_5->remaining_bytes -= VAR_7;

    return VAR_7;
  }
  else {
    VAR_5->paused = 1;
    return VAR_0;
  }
}

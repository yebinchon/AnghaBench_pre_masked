
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int mutex; } ;
struct TYPE_6__ {scalar_t__ latency; } ;
struct TYPE_8__ {int bytes_in_buffer; TYPE_2__ thread; scalar_t__ delay_offset; TYPE_1__ backend_info; } ;
typedef TYPE_3__ rsound_t ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static size_t FUNC_4(rsound_t *VAR_0)
{
   int VAR_1;
   FUNC_1(VAR_0);
   VAR_1 = VAR_0->bytes_in_buffer;


   VAR_1 += (int)VAR_0->backend_info.latency;

   FUNC_2(VAR_0->thread.mutex);
   VAR_1 += VAR_0->delay_offset;
   FUNC_0("Offset: %d.\n", VAR_0->delay_offset);
   FUNC_3(VAR_0->thread.mutex);

   if ( VAR_1 < 0 )
      VAR_1 = 0;

   return (size_t)VAR_1;
}

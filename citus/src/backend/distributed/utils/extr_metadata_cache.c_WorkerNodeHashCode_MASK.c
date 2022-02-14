
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {char* workerName; int workerPort; } ;
typedef TYPE_1__ WorkerNode ;
typedef int Size ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int const*,int) ;

__attribute__((used)) static uint32
FUNC_2(const void *VAR_1, Size VAR_2)
{
 const WorkerNode *VAR_3 = (const WorkerNode *) VAR_1;
 const char *VAR_4 = VAR_3->workerName;
 const uint32 *VAR_5 = &(VAR_3->workerPort);


 uint32 VAR_6 = 17;
 VAR_6 = 37 * VAR_6 + FUNC_0(VAR_4, VAR_0);
 VAR_6 = 37 * VAR_6 + FUNC_1(VAR_5, sizeof(uint32));
 return VAR_6;
}

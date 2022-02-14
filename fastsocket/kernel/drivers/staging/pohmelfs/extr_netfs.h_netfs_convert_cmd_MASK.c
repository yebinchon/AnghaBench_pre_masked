
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfs_cmd {int size; void* cpad; void* csize; void* ext; void* cmd; void* iv; void* start; void* id; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static inline void FUNC_3(struct netfs_cmd *VAR_0)
{
 VAR_0->id = FUNC_2(VAR_0->id);
 VAR_0->start = FUNC_2(VAR_0->start);
 VAR_0->iv = FUNC_2(VAR_0->iv);
 VAR_0->cmd = FUNC_0(VAR_0->cmd);
 VAR_0->ext = FUNC_0(VAR_0->ext);
 VAR_0->csize = FUNC_0(VAR_0->csize);
 VAR_0->cpad = FUNC_0(VAR_0->cpad);
 VAR_0->size = FUNC_1(VAR_0->size);
}

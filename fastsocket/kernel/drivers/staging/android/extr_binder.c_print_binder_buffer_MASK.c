
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_buffer {int debug_id; scalar_t__ transaction; int offsets_size; int data_size; int data; } ;


 int FUNC_0 (char*,int,char*,char const*,int,int ,int ,int ,char*) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, char *VAR_1, const char *VAR_2,
     struct binder_buffer *VAR_3)
{
 VAR_0 += FUNC_0(VAR_0, VAR_1 - VAR_0, "%s %d: %p size %zd:%zd %s\n",
   VAR_2, VAR_3->debug_id, VAR_3->data,
   VAR_3->data_size, VAR_3->offsets_size,
   VAR_3->transaction ? "active" : "delivered");
 return VAR_0;
}

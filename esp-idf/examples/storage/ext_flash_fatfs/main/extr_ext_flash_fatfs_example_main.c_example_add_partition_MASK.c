
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int esp_partition_t ;
struct TYPE_4__ {int size; } ;
typedef TYPE_1__ esp_flash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int,char const*,int ,int ,int const**) ;

__attribute__((used)) static const esp_partition_t* FUNC_3(esp_flash_t* VAR_3, const char* VAR_4)
{
    FUNC_1(VAR_2, "Adding external Flash as a partition, label=\"%s\", size=%d KB", VAR_4, VAR_3->size / 1024);
    const esp_partition_t* VAR_5;
    FUNC_0(FUNC_2(VAR_3, 0, VAR_3->size, VAR_4, VAR_1, VAR_0, &VAR_5));
    return VAR_5;
}

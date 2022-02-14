
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_7__ {scalar_t__ mChannelLayoutTag; scalar_t__ mChannelBitmap; } ;
typedef scalar_t__ AudioChannelLayoutTag ;
typedef TYPE_1__ AudioChannelLayout ;


 int FUNC_0 (int ,int,scalar_t__*,int *,TYPE_1__*) ;
 int FUNC_1 (int ,int,scalar_t__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static AudioChannelLayout *FUNC_4(AudioChannelLayout *VAR_4, UInt32* VAR_5)
{
    AudioChannelLayoutTag VAR_6 = VAR_4->mChannelLayoutTag;
    AudioChannelLayout *VAR_7;
    if (VAR_6 == VAR_1)
        return VAR_4;
    else if (VAR_6 == VAR_0)
        FUNC_1(VAR_2,
                                   sizeof(UInt32), &VAR_4->mChannelBitmap, VAR_5);
    else
        FUNC_1(VAR_3,
                                   sizeof(AudioChannelLayoutTag), &VAR_6, VAR_5);
    VAR_7 = FUNC_3(*VAR_5);
    if (!VAR_7) {
        FUNC_2(VAR_4);
        return ((void*)0);
    }
    if (VAR_6 == VAR_0)
        FUNC_0(VAR_2,
                               sizeof(UInt32), &VAR_4->mChannelBitmap, VAR_5, VAR_7);
    else
        FUNC_0(VAR_3,
                               sizeof(AudioChannelLayoutTag), &VAR_6, VAR_5, VAR_7);
    VAR_7->mChannelLayoutTag = VAR_1;
    FUNC_2(VAR_4);
    return VAR_7;
}
